#include <napi.h>
#include "framework/almost_electron.h"

Napi::Number TestWrapper(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();

    if (info.Length() < 2 || !info[0].IsNumber() || !info[1].IsNumber())
    {
        Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
    }

    double arg0 = info[0].As<Napi::Number>().DoubleValue();
    double arg1 = info[1].As<Napi::Number>().DoubleValue();
    Napi::Number returnValue = Napi::Number::New(env, Test(arg0, arg1));

    return returnValue;
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "test"), Napi::Function::New(env, TestWrapper));
    return exports;
}

NODE_API_MODULE(addon, Init)
