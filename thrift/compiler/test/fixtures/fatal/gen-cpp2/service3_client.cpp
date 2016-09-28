/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service3.h"

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service3.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace test_cpp2 { namespace cpp_reflection {

const char* service3AsyncClient::getServiceName() {
  return "service3";
}

void service3AsyncClient::methodA(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodA(rpcOptions, std::move(callback));
}

void service3AsyncClient::methodA(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodAT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodAT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodA() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodA(rpcOptions);
}

void service3AsyncClient::sync_methodA(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodA(rpcOptions, std::move(callback));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodA(_returnState);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodA() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodA(rpcOptions);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodA(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_methodA, channel_);
  methodA(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodA(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_methodA, channel_);
  methodA(rpcOptions, std::move(callback));
  return _future;
}

void service3AsyncClient::methodA(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  methodA(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodA(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodAT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodAT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodA(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodA(state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodA(::apache::thrift::ClientReceiveState& state) {
  recv_methodA(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodA(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodA(state);
}

void service3AsyncClient::methodB(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodB(rpcOptions, std::move(callback), x, y, z);
}

void service3AsyncClient::methodB(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodBT(&writer, rpcOptions, std::move(callback), x, y, z);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodBT(&writer, rpcOptions, std::move(callback), x, y, z);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodB(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodB(rpcOptions, x, y, z);
}

void service3AsyncClient::sync_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodB(rpcOptions, std::move(callback), x, y, z);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodB(_returnState);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodB(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodB(rpcOptions, x, y, z);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_methodB, channel_);
  methodB(rpcOptions, std::move(callback), x, y, z);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_methodB, channel_);
  methodB(rpcOptions, std::move(callback), x, y, z);
  return _future;
}

void service3AsyncClient::methodB(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  methodB(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),x,y,z);
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodB(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodBT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodBT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodB(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodB(state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodB(::apache::thrift::ClientReceiveState& state) {
  recv_methodB(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodB(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodB(state);
}

void service3AsyncClient::methodC(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodC(rpcOptions, std::move(callback));
}

void service3AsyncClient::methodC(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodCT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodCT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

int32_t service3AsyncClient::sync_methodC() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_methodC(rpcOptions);
}

int32_t service3AsyncClient::sync_methodC(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodC(rpcOptions, std::move(callback));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  return recv_methodC(_returnState);
}

folly::Future<int32_t> service3AsyncClient::future_methodC() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodC(rpcOptions);
}

folly::Future<int32_t> service3AsyncClient::future_methodC(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<int32_t> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::FutureCallback<int32_t>>(std::move(_promise), recv_wrapped_methodC, channel_);
  methodC(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodC(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::HeaderFutureCallback<int32_t>>(std::move(_promise), recv_wrapped_methodC, channel_);
  methodC(rpcOptions, std::move(callback));
  return _future;
}

void service3AsyncClient::methodC(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  methodC(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodCT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodCT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

int32_t service3AsyncClient::recv_methodC(::apache::thrift::ClientReceiveState& state) {
  int32_t _return;
  auto ew = recv_wrapped_methodC(_return, state);
  if (ew) {
    ew.throwException();
  }
  return _return;
}

int32_t service3AsyncClient::recv_instance_methodC(::apache::thrift::ClientReceiveState& state) {
  return recv_methodC(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodC(_return, state);
}

void service3AsyncClient::methodD(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodD(rpcOptions, std::move(callback), i, j, k);
}

void service3AsyncClient::methodD(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodDT(&writer, rpcOptions, std::move(callback), i, j, k);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodDT(&writer, rpcOptions, std::move(callback), i, j, k);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

int32_t service3AsyncClient::sync_methodD(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_methodD(rpcOptions, i, j, k);
}

int32_t service3AsyncClient::sync_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodD(rpcOptions, std::move(callback), i, j, k);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  return recv_methodD(_returnState);
}

folly::Future<int32_t> service3AsyncClient::future_methodD(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodD(rpcOptions, i, j, k);
}

folly::Future<int32_t> service3AsyncClient::future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  folly::Promise<int32_t> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::FutureCallback<int32_t>>(std::move(_promise), recv_wrapped_methodD, channel_);
  methodD(rpcOptions, std::move(callback), i, j, k);
  return _future;
}

folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  folly::Promise<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::HeaderFutureCallback<int32_t>>(std::move(_promise), recv_wrapped_methodD, channel_);
  methodD(rpcOptions, std::move(callback), i, j, k);
  return _future;
}

void service3AsyncClient::methodD(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  methodD(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),i,j,k);
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodDT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodDT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

int32_t service3AsyncClient::recv_methodD(::apache::thrift::ClientReceiveState& state) {
  int32_t _return;
  auto ew = recv_wrapped_methodD(_return, state);
  if (ew) {
    ew.throwException();
  }
  return _return;
}

int32_t service3AsyncClient::recv_instance_methodD(::apache::thrift::ClientReceiveState& state) {
  return recv_methodD(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodD(_return, state);
}

void service3AsyncClient::methodE(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodE(rpcOptions, std::move(callback));
}

void service3AsyncClient::methodE(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodET(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodET(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodE( ::test_cpp2::cpp_reflection::struct2& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodE(rpcOptions, _return);
}

void service3AsyncClient::sync_methodE(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodE(rpcOptions, std::move(callback));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodE(_return, _returnState);
}

folly::Future< ::test_cpp2::cpp_reflection::struct2> service3AsyncClient::future_methodE() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodE(rpcOptions);
}

folly::Future< ::test_cpp2::cpp_reflection::struct2> service3AsyncClient::future_methodE(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise< ::test_cpp2::cpp_reflection::struct2> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::FutureCallback< ::test_cpp2::cpp_reflection::struct2>>(std::move(_promise), recv_wrapped_methodE, channel_);
  methodE(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodE(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::HeaderFutureCallback< ::test_cpp2::cpp_reflection::struct2>>(std::move(_promise), recv_wrapped_methodE, channel_);
  methodE(rpcOptions, std::move(callback));
  return _future;
}

void service3AsyncClient::methodE(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  methodE(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodET(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodET(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodE(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_methodE(_return, state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodE(_return, state);
}

void service3AsyncClient::methodF(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodF(rpcOptions, std::move(callback), l, m, n);
}

void service3AsyncClient::methodF(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodFT(&writer, rpcOptions, std::move(callback), l, m, n);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodFT(&writer, rpcOptions, std::move(callback), l, m, n);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodF( ::test_cpp2::cpp_reflection::struct3& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodF(rpcOptions, _return, l, m, n);
}

void service3AsyncClient::sync_methodF(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct3& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodF(rpcOptions, std::move(callback), l, m, n);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodF(_return, _returnState);
}

folly::Future< ::test_cpp2::cpp_reflection::struct3> service3AsyncClient::future_methodF(int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodF(rpcOptions, l, m, n);
}

folly::Future< ::test_cpp2::cpp_reflection::struct3> service3AsyncClient::future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  folly::Promise< ::test_cpp2::cpp_reflection::struct3> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::FutureCallback< ::test_cpp2::cpp_reflection::struct3>>(std::move(_promise), recv_wrapped_methodF, channel_);
  methodF(rpcOptions, std::move(callback), l, m, n);
  return _future;
}

folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct3, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  folly::Promise<std::pair< ::test_cpp2::cpp_reflection::struct3, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = folly::make_unique<apache::thrift::HeaderFutureCallback< ::test_cpp2::cpp_reflection::struct3>>(std::move(_promise), recv_wrapped_methodF, channel_);
  methodF(rpcOptions, std::move(callback), l, m, n);
  return _future;
}

void service3AsyncClient::methodF(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  methodF(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),l,m,n);
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodFT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodFT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodF(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_methodF(_return, state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodF(_return, state);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift