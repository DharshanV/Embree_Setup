#include <embree3/rtcore.h>
#include <embree3/common/math/vec2.h>
#include <embree3/common/math/vec3.h>
#include <iostream>
#include <tbb/parallel_for.h>

int main()
{
    embree::RTCDevice pDevice = embree::rtcNewDevice(nullptr);
    std::cout << "RTC device: " << pDevice << std::endl;
    std::cout << "Vec3f: " << embree::Vec3f(0.0f, 1.0f, 2.0f) << std::endl;
    std::cout << "TBB num hardware threads: " << tbb::this_task_arena::max_concurrency() << std::endl;
    embree::rtcReleaseDevice(pDevice);
    return 0;
}