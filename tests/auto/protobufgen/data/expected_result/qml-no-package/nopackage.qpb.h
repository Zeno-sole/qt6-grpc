/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef NOPACKAGE_QPB_H
#define NOPACKAGE_QPB_H

#include "nopackageexternal.qpb.h"
#include "tst_qtprotobufgen_nopackage_qml_gen_exports.qpb.h"

#include <QtProtobuf/qprotobuflazymessagepointer.h>
#include <QtProtobuf/qprotobufmessage.h>
#include <QtProtobuf/qprotobufobject.h>
#include <QtProtobuf/qtprotobuftypes.h>

#include <QtQml/qqmllist.h>
#include <QtQml/qqmlregistration.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qlist.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qshareddata.h>
#include <QtCore/qstring.h>


namespace TestEnumGadget {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(TestEnum)

enum class TestEnum : int32_t {
    LOCAL_ENUM_VALUE0 = 0,
    LOCAL_ENUM_VALUE1 = 1,
    LOCAL_ENUM_VALUE2 = 2,
    LOCAL_ENUM_VALUE3 = 5,
};
Q_ENUM_NS(TestEnum)

using TestEnumRepeated = QList<TestEnum>;
QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void registerTypes();
} // namespace TestEnumGadget
class EmptyMessage;
using EmptyMessageRepeated = QList<EmptyMessage>;
namespace EmptyMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace EmptyMessage_QtProtobufNested

class SimpleIntMessage;
using SimpleIntMessageRepeated = QList<SimpleIntMessage>;
namespace SimpleIntMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace SimpleIntMessage_QtProtobufNested

class NoPackageExternalMessage;
using NoPackageExternalMessageRepeated = QList<NoPackageExternalMessage>;
namespace NoPackageExternalMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace NoPackageExternalMessage_QtProtobufNested

class NoPackageMessage;
using NoPackageMessageRepeated = QList<NoPackageMessage>;
namespace NoPackageMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace NoPackageMessage_QtProtobufNested


class EmptyMessage_QtProtobufData;
class EmptyMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
    QML_VALUE_TYPE(emptyMessage)

public:
    using QtProtobufFieldEnum = EmptyMessage_QtProtobufNested::QtProtobufFieldEnum;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT EmptyMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT ~EmptyMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT EmptyMessage(const EmptyMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT EmptyMessage &operator =(const EmptyMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT EmptyMessage(EmptyMessage &&other) noexcept;
    EmptyMessage &operator =(EmptyMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(EmptyMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT bool comparesEqual(const EmptyMessage &lhs, const EmptyMessage &rhs) noexcept;
    friend bool operator==(const EmptyMessage &lhs, const EmptyMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const EmptyMessage &lhs, const EmptyMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<EmptyMessage_QtProtobufData> dptr;
};
namespace EmptyMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(EmptyMessage)

} // namespace EmptyMessage_QtProtobufNested

class SimpleIntMessage_QtProtobufData;
class SimpleIntMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
    QML_VALUE_TYPE(simpleIntMessage)
    Q_PROPERTY(QtProtobuf::int32 testFieldInt READ testFieldInt WRITE setTestFieldInt SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = SimpleIntMessage_QtProtobufNested::QtProtobufFieldEnum;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT SimpleIntMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT ~SimpleIntMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT SimpleIntMessage(const SimpleIntMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT SimpleIntMessage &operator =(const SimpleIntMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT SimpleIntMessage(SimpleIntMessage &&other) noexcept;
    SimpleIntMessage &operator =(SimpleIntMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(SimpleIntMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT QtProtobuf::int32 testFieldInt() const;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestFieldInt(QtProtobuf::int32 testFieldInt);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT bool comparesEqual(const SimpleIntMessage &lhs, const SimpleIntMessage &rhs) noexcept;
    friend bool operator==(const SimpleIntMessage &lhs, const SimpleIntMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const SimpleIntMessage &lhs, const SimpleIntMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<SimpleIntMessage_QtProtobufData> dptr;
};
namespace SimpleIntMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(SimpleIntMessage)

enum class QtProtobufFieldEnum {
    TestFieldIntProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace SimpleIntMessage_QtProtobufNested

class NoPackageExternalMessage_QtProtobufData;
class NoPackageExternalMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
    QML_VALUE_TYPE(noPackageExternalMessage)
    Q_PROPERTY(SimpleIntMessageExt *testField_p READ testField_p WRITE setTestField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestField READ hasTestField)
    Q_PROPERTY(SimpleIntMessageExt testField READ testField WRITE setTestField)

public:
    using QtProtobufFieldEnum = NoPackageExternalMessage_QtProtobufNested::QtProtobufFieldEnum;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageExternalMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT ~NoPackageExternalMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageExternalMessage(const NoPackageExternalMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageExternalMessage &operator =(const NoPackageExternalMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageExternalMessage(NoPackageExternalMessage &&other) noexcept;
    NoPackageExternalMessage &operator =(NoPackageExternalMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(NoPackageExternalMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT bool hasTestField() const;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT const SimpleIntMessageExt &testField() const &;
    Q_INVOKABLE QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void clearTestField();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestField(const SimpleIntMessageExt &testField);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestField(SimpleIntMessageExt &&testField);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT bool comparesEqual(const NoPackageExternalMessage &lhs, const NoPackageExternalMessage &rhs) noexcept;
    friend bool operator==(const NoPackageExternalMessage &lhs, const NoPackageExternalMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const NoPackageExternalMessage &lhs, const NoPackageExternalMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT SimpleIntMessageExt *testField_p();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestField_p(SimpleIntMessageExt *testField);
    QExplicitlySharedDataPointer<NoPackageExternalMessage_QtProtobufData> dptr;
};
namespace NoPackageExternalMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(NoPackageExternalMessage)

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace NoPackageExternalMessage_QtProtobufNested

class NoPackageMessage_QtProtobufData;
class NoPackageMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
    QML_VALUE_TYPE(noPackageMessage)
    Q_PROPERTY(SimpleIntMessage *testField_p READ testField_p WRITE setTestField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestField READ hasTestField)
    Q_PROPERTY(SimpleIntMessage testField READ testField WRITE setTestField)

public:
    using QtProtobufFieldEnum = NoPackageMessage_QtProtobufNested::QtProtobufFieldEnum;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT ~NoPackageMessage();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageMessage(const NoPackageMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageMessage &operator =(const NoPackageMessage &other);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT NoPackageMessage(NoPackageMessage &&other) noexcept;
    NoPackageMessage &operator =(NoPackageMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(NoPackageMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT bool hasTestField() const;
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT const SimpleIntMessage &testField() const &;
    Q_INVOKABLE QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void clearTestField();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestField(const SimpleIntMessage &testField);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestField(SimpleIntMessage &&testField);
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT bool comparesEqual(const NoPackageMessage &lhs, const NoPackageMessage &rhs) noexcept;
    friend bool operator==(const NoPackageMessage &lhs, const NoPackageMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const NoPackageMessage &lhs, const NoPackageMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT SimpleIntMessage *testField_p();
    QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT void setTestField_p(SimpleIntMessage *testField);
    QExplicitlySharedDataPointer<NoPackageMessage_QtProtobufData> dptr;
};
namespace NoPackageMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_NOPACKAGE_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(NoPackageMessage)

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace NoPackageMessage_QtProtobufNested

#endif // NOPACKAGE_QPB_H
