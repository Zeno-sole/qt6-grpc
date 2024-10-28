
#include "nopackage.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarEmptyMessage(qRegisterProtobufType<EmptyMessage>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSimpleIntMessage(qRegisterProtobufType<SimpleIntMessage>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarNoPackageExternalMessage(qRegisterProtobufType<NoPackageExternalMessage>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarNoPackageMessage(qRegisterProtobufType<NoPackageMessage>);
static bool RegisterNopackageProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();

