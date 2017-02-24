#include <boost/python.hpp>
using namespace boost::python;

char const* greet()
{

    return "aabb";
}

#include <boost/python.hpp>

BOOST_PYTHON_MODULE(hello)          // Python 模块开始
{
    using namespace boost::python;      // 打开命名空间
    def("greet", greet);
}
