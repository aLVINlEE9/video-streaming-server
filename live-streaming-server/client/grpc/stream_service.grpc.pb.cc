// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: stream_service.proto

#include "stream_service.pb.h"
#include "stream_service.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace opencv {

static const char* StreamService_method_names[] = {
  "/opencv.StreamService/SendStream",
};

std::unique_ptr< StreamService::Stub> StreamService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamService::Stub> stub(new StreamService::Stub(channel, options));
  return stub;
}

StreamService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SendStream_(StreamService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::opencv::OcvMat, ::google::protobuf::Empty>* StreamService::Stub::SendStreamRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::opencv::OcvMat, ::google::protobuf::Empty>::Create(channel_.get(), rpcmethod_SendStream_, context);
}

void StreamService::Stub::async::SendStream(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::opencv::OcvMat,::google::protobuf::Empty>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::opencv::OcvMat,::google::protobuf::Empty>::Create(stub_->channel_.get(), stub_->rpcmethod_SendStream_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::opencv::OcvMat, ::google::protobuf::Empty>* StreamService::Stub::AsyncSendStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::opencv::OcvMat, ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_SendStream_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::opencv::OcvMat, ::google::protobuf::Empty>* StreamService::Stub::PrepareAsyncSendStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::opencv::OcvMat, ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_SendStream_, context, false, nullptr);
}

StreamService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamService_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< StreamService::Service, ::opencv::OcvMat, ::google::protobuf::Empty>(
          [](StreamService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::google::protobuf::Empty,
             ::opencv::OcvMat>* stream) {
               return service->SendStream(ctx, stream);
             }, this)));
}

StreamService::Service::~Service() {
}

::grpc::Status StreamService::Service::SendStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::opencv::OcvMat>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace opencv

