// Generated by gencpp from file resistors_runtime_monitoring/average_velocity.msg
// DO NOT EDIT!


#ifndef RESISTORS_RUNTIME_MONITORING_MESSAGE_AVERAGE_VELOCITY_H
#define RESISTORS_RUNTIME_MONITORING_MESSAGE_AVERAGE_VELOCITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace resistors_runtime_monitoring
{
template <class ContainerAllocator>
struct average_velocity_
{
  typedef average_velocity_<ContainerAllocator> Type;

  average_velocity_()
    : average(0.0)  {
    }
  average_velocity_(const ContainerAllocator& _alloc)
    : average(0.0)  {
  (void)_alloc;
    }



   typedef double _average_type;
  _average_type average;





  typedef boost::shared_ptr< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> const> ConstPtr;

}; // struct average_velocity_

typedef ::resistors_runtime_monitoring::average_velocity_<std::allocator<void> > average_velocity;

typedef boost::shared_ptr< ::resistors_runtime_monitoring::average_velocity > average_velocityPtr;
typedef boost::shared_ptr< ::resistors_runtime_monitoring::average_velocity const> average_velocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace resistors_runtime_monitoring

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'resistors_runtime_monitoring': ['/home/michaela/catkin_ws/src/resistors_runtime_monitoring/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "711be0a796b85a8a1e109ae6a26ad085";
  }

  static const char* value(const ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x711be0a796b85a8aULL;
  static const uint64_t static_value2 = 0x1e109ae6a26ad085ULL;
};

template<class ContainerAllocator>
struct DataType< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "resistors_runtime_monitoring/average_velocity";
  }

  static const char* value(const ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 average\n\
";
  }

  static const char* value(const ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.average);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct average_velocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::resistors_runtime_monitoring::average_velocity_<ContainerAllocator>& v)
  {
    s << indent << "average: ";
    Printer<double>::stream(s, indent + "  ", v.average);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RESISTORS_RUNTIME_MONITORING_MESSAGE_AVERAGE_VELOCITY_H
