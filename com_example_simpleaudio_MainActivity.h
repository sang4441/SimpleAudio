/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_simpleaudio_MainActivity */

#ifndef _Included_com_example_simpleaudio_MainActivity
#define _Included_com_example_simpleaudio_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
#undef com_example_simpleaudio_MainActivity_MODE_PRIVATE
#define com_example_simpleaudio_MainActivity_MODE_PRIVATE 0L
#undef com_example_simpleaudio_MainActivity_MODE_WORLD_READABLE
#define com_example_simpleaudio_MainActivity_MODE_WORLD_READABLE 1L
#undef com_example_simpleaudio_MainActivity_MODE_WORLD_WRITEABLE
#define com_example_simpleaudio_MainActivity_MODE_WORLD_WRITEABLE 2L
#undef com_example_simpleaudio_MainActivity_MODE_APPEND
#define com_example_simpleaudio_MainActivity_MODE_APPEND 32768L
#undef com_example_simpleaudio_MainActivity_BIND_AUTO_CREATE
#define com_example_simpleaudio_MainActivity_BIND_AUTO_CREATE 1L
#undef com_example_simpleaudio_MainActivity_BIND_DEBUG_UNBIND
#define com_example_simpleaudio_MainActivity_BIND_DEBUG_UNBIND 2L
#undef com_example_simpleaudio_MainActivity_BIND_NOT_FOREGROUND
#define com_example_simpleaudio_MainActivity_BIND_NOT_FOREGROUND 4L
#undef com_example_simpleaudio_MainActivity_CONTEXT_INCLUDE_CODE
#define com_example_simpleaudio_MainActivity_CONTEXT_INCLUDE_CODE 1L
#undef com_example_simpleaudio_MainActivity_CONTEXT_IGNORE_SECURITY
#define com_example_simpleaudio_MainActivity_CONTEXT_IGNORE_SECURITY 2L
#undef com_example_simpleaudio_MainActivity_CONTEXT_RESTRICTED
#define com_example_simpleaudio_MainActivity_CONTEXT_RESTRICTED 4L
#undef com_example_simpleaudio_MainActivity_RESULT_CANCELED
#define com_example_simpleaudio_MainActivity_RESULT_CANCELED 0L
#undef com_example_simpleaudio_MainActivity_RESULT_OK
#define com_example_simpleaudio_MainActivity_RESULT_OK -1L
#undef com_example_simpleaudio_MainActivity_RESULT_FIRST_USER
#define com_example_simpleaudio_MainActivity_RESULT_FIRST_USER 1L
#undef com_example_simpleaudio_MainActivity_DEFAULT_KEYS_DISABLE
#define com_example_simpleaudio_MainActivity_DEFAULT_KEYS_DISABLE 0L
#undef com_example_simpleaudio_MainActivity_DEFAULT_KEYS_DIALER
#define com_example_simpleaudio_MainActivity_DEFAULT_KEYS_DIALER 1L
#undef com_example_simpleaudio_MainActivity_DEFAULT_KEYS_SHORTCUT
#define com_example_simpleaudio_MainActivity_DEFAULT_KEYS_SHORTCUT 2L
#undef com_example_simpleaudio_MainActivity_DEFAULT_KEYS_SEARCH_LOCAL
#define com_example_simpleaudio_MainActivity_DEFAULT_KEYS_SEARCH_LOCAL 3L
#undef com_example_simpleaudio_MainActivity_DEFAULT_KEYS_SEARCH_GLOBAL
#define com_example_simpleaudio_MainActivity_DEFAULT_KEYS_SEARCH_GLOBAL 4L
/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    createEngine
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_simpleaudio_MainActivity_createEngine
  (JNIEnv *, jclass);

/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    createBufferQueueAudioPlayer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_simpleaudio_MainActivity_createBufferQueueAudioPlayer
  (JNIEnv *, jclass);

/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    playBack
 * Signature: ([SI)V
 */
JNIEXPORT void JNICALL Java_com_example_simpleaudio_MainActivity_playBack
  (JNIEnv *, jclass, jshortArray, jint);

/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    createAudioRecorder
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_simpleaudio_MainActivity_createAudioRecorder
  (JNIEnv *, jclass);

/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    startRecording
 * Signature: ()[S
 */
JNIEXPORT jshortArray JNICALL Java_com_example_simpleaudio_MainActivity_startRecording
  (JNIEnv *, jclass);

/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    getBuffer
 * Signature: ()[S
 */
JNIEXPORT jshortArray JNICALL Java_com_example_simpleaudio_MainActivity_getBuffer
  (JNIEnv *, jclass);

/*
 * Class:     com_example_simpleaudio_MainActivity
 * Method:    setBuffer
 * Signature: ([SI)V
 */
JNIEXPORT void JNICALL Java_com_example_simpleaudio_MainActivity_setBuffer
  (JNIEnv *, jclass, jshortArray, jint);

#ifdef __cplusplus
}
#endif
#endif
