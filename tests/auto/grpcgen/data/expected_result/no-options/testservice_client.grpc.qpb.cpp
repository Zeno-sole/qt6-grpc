/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#include "testservice_client.grpc.qpb.h"

namespace qtgrpc::tests {
namespace TestService {
using namespace Qt::StringLiterals;

Client::Client(QObject *parent)
    : QGrpcClientBase("qtgrpc.tests.TestService"_L1, parent)
{
}

Client::~Client() = default;

std::unique_ptr<QGrpcCallReply> Client::testMethod(const qtgrpc::tests::SimpleStringMessage &arg)
{
    return call("testMethod"_L1, arg, {});
}


std::unique_ptr<QGrpcCallReply> Client::testMethod(const qtgrpc::tests::SimpleStringMessage &arg, const QGrpcCallOptions &options)
{
    return call("testMethod"_L1, arg, options);
}

std::unique_ptr<QGrpcServerStream> Client::testMethodServerStream(const qtgrpc::tests::SimpleStringMessage &arg)
{
    return serverStream("testMethodServerStream"_L1, arg, {});
}

std::unique_ptr<QGrpcServerStream> Client::testMethodServerStream(const qtgrpc::tests::SimpleStringMessage &arg, const QGrpcCallOptions &options)
{
    return serverStream("testMethodServerStream"_L1, arg, options);
}

std::unique_ptr<QGrpcClientStream> Client::testMethodClientStream(const qtgrpc::tests::SimpleStringMessage &arg)
{
    return clientStream("testMethodClientStream"_L1, arg, {});
}

std::unique_ptr<QGrpcClientStream> Client::testMethodClientStream(const qtgrpc::tests::SimpleStringMessage &arg, const QGrpcCallOptions &options)
{
    return clientStream("testMethodClientStream"_L1, arg, options);
}

std::unique_ptr<QGrpcBidiStream> Client::testMethodBiStream(const qtgrpc::tests::SimpleStringMessage &arg)
{
    return bidiStream("testMethodBiStream"_L1, arg, {});
}

std::unique_ptr<QGrpcBidiStream> Client::testMethodBiStream(const qtgrpc::tests::SimpleStringMessage &arg, const QGrpcCallOptions &options)
{
    return bidiStream("testMethodBiStream"_L1, arg, options);
}

} // namespace TestService
} // namespace qtgrpc::tests

