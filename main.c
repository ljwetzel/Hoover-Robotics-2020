#include <kipr/botball.h>
void straight();
void left();
void right();
void stop();
void up();
void down();
void foward();
void doooown();
void straight2();
void open();
void close();

int main()
{
   if(1)
   {//wait_for_light();
    printf("hi");
    
    while(1==1)
    {
        printf("hi");
        //close();
        
        doooown();
        straight();
        msleep(3500);
        up();
        open();
        close();
        open();
        left();
        straight2();
        right();
        stop();
        up();
        foward();
        down();
        
    }
        
    }
    return 0;
}

void straight()
{
	motor(0,100);
    motor(3,100);
}

void left()
{
	motor(0,0);
    motor(3,100);
    msleep(1600);
}

void right()
{
	motor(0,100);
    motor(3,0);
    msleep(1600);
}
void stop()
{
 	motor(0,0);
    motor(3,0);
    msleep(2000);
}
void up()
{
 	set_servo_position(0,200);
        set_servo_position(0,3000);
    msleep(1000);
    stop();
}
void foward()
{
 	set_servo_position(3,1750);
        set_servo_position(3,1020);
    msleep(1000);
    stop();
}
void down()
    {
 	set_servo_position(0,200);
        set_servo_position(0,3000);
    msleep(1000);
    stop();
}
void doooown()
    {
 	set_servo_position(3,950);
    set_servo_position(3,1776);
}

void straight2()
{
	motor (0,100);
    motor (3,100);
	msleep(2000);
}
void open()
{	
    motor(2,100);
    msleep(2000);
}
void close()
{
    motor(2,-100);
    msleep(2000);
}