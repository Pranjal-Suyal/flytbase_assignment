#include <cpp_api/navigation_bridge.h>

Navigation nav;
int main(int argc, char *argv[])
{
    nav.take_off(5);                   //takeoff at 5m 
    nav.position_set(6.5,0,-5);        //side length = 6.5 m
    nav.position_set(6.5,6.5,-5);
    nav.position_set(0,6.5,-5);
    nav.position_set(0,0,-5);
    nav.land(false);                  
}
