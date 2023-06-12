module=KmmTestApiModule
echo Current build module: $module
./gradlew :$module\:podPublishXCFramework :$module\:assembleDebug :$module\:assembleRelease # --info
#echo pwd
#echo 1
#path=pwd
#mkdir aar
#ls $path/$module/build/outputs/aar
#mv $path/$module/build/outputs/aar $path/aar
#echo Android and iOS artifacts for module $module created!
