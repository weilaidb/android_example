#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_weilai_administrator_myapplication_feature_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++,weilai, no wait 我是猎头熊莎莎，目前正在招聘【算法工程师】职位，您的简历比较符合我们的招聘需求，现将职位信息发送给您，希望能帮您找到满意工作。";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_weilai_administrator_myapplication_feature_MainActivity_stringTest(
        JNIEnv *env,
jobject /* this */) {
std::string hello = "公司名称： 大型AI芯片公司  所属行业： 电子技术/半导体/集成电路,计算机软件,互联网/移动互联网/电子商务 公司性质： 民营 公司规模： 1000-9999人。";
return env->NewStringUTF(hello.c_str());
}
