#include <v8.h>
#include <node.h>
#include <stdio.h>

#include "sandbox.hpp"

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Activate(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();

  Sandbox::Result r = Sandbox::activate();

  // XXX: Check result and pass it back to node.
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "activate"));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "activate", Activate);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, init)