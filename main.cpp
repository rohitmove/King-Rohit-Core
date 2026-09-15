#include <jni.h>
#include <android/log.h>
#include <sys/mprotect.h>
#include <unistd.h>

#define TAG "KingRohitCore"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)

extern "C" {
    JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
        LOGD("King Rohit Core Loaded Successfully!");
        return JNI_VERSION_1_6;
    }
}
