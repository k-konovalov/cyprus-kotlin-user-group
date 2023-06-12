plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    kotlin("plugin.serialization") version "1.8.21"
    id("com.android.library")
    //id("test")
}

@OptIn(org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi::class)
kotlin {
    targetHierarchy.default()

    // Platform to build
    android {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    iosX64()
    iosArm64()
    iosSimulatorArm64()

    // :KmmTestApiModule:generateDummyFramework?
    cocoapods {
        summary = "Some description for the Shared Module"
        homepage = "Link to the Shared Module homepage"
        version = "1.0"
        ios.deploymentTarget = "14.1"
        framework {
            baseName = "KmmTestApiModule"
        }
    }

    // Regular framework?
/*    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "KmmTestApiModule"
        }
    }*/
    
    sourceSets {
        val ktor_version = "2.2.4"
        val serialization_version = "1.5.1"
        val commonMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-core:$ktor_version")
                implementation ("org.jetbrains.kotlinx:kotlinx-serialization-json:$serialization_version")
                implementation ("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.4")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-okhttp:$ktor_version")
            }
        }
        val iosMain by getting {
            dependencies {
               implementation("io.ktor:ktor-client-ios:$ktor_version")
           }
        }
        //val iosMain by creating {
            //dependsOn(commonMain)
            /*
            iosX64Main.dependsOn(this)
            iosArm64Main.dependsOn(this)
            iosSimulatorArm64Main.dependsOn(this)
            */
            /*dependencies {
                implementation("io.ktor:ktor-client-ios:$ktor_version")
            }*/
        //}
    }
}

android {
    namespace = "com.example.myapplication"
    compileSdk = 33
    defaultConfig {
        minSdk = 29
    }

    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}
