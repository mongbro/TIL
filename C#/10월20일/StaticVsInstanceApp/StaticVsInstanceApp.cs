using System;
/************************ ???????????**********************/
namespace StaticVsInstanceApp
{
    public class StaticVsInstanceApp {
        int instanceVariable;
        static int staticVariable;
    
        static void Main(string[] args)
        {
            StaticVsInstanceApp obj = new StaticVsInstanceApp();
            obj.instanceVariable = 10;
            //StaticVsInstanceApp.instanceVariable = 10;
            StaticVsInstanceApp.staticVariable = 20;
            //obj.staticVariable = 20;
            Console.WriteLine("instance variable = {0}, static varibale = {1}",
                obj.instanceVariable, StaticVsInstanceApp.staticVariable);
        }
    }
}
