// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#include "NativeExternInterface1.hpp"  // my header
#include "NativeClientInterface.hpp"
#include "NativeClientReturnedRecord.hpp"

namespace djinni_generated {

NativeExternInterface1::NativeExternInterface1() : ::djinni::JniInterface<::ExternInterface1, NativeExternInterface1>("com/dropbox/djinni/test/ExternInterface1$CppProxy") {}

NativeExternInterface1::~NativeExternInterface1() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_ExternInterface1_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::ExternInterface1>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeClientReturnedRecord::JniType JNICALL Java_com_dropbox_djinni_test_ExternInterface1_00024CppProxy_native_1foo(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeClientInterface::JniType j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ExternInterface1>(nativeRef);
        auto r = ref->foo(::djinni_generated::NativeClientInterface::toCpp(jniEnv, j_i));
        return ::djinni::release(::djinni_generated::NativeClientReturnedRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated