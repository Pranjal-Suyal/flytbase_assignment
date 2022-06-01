#include <cpp_api/navigation_bridge.h>

Navigation nav;
int main(int argc, char *argv[])
{
    nav.take_off(10);                    //takeoff at an altitude of 10 m
    nav.position_set(0,0,-5);            // decreasing altitude to 5 m
    nav.position_set(10,5,-5);           // side length 10m 
    nav.position_set(0,10,-5);
    nav.position_set(0,0,-5);
    nav.land(false);                  
}
