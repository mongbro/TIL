using System;

namespace EventApp
{
    class EventApp
    {
        public EventHandler MyEvent;
        void MyEventHandler(object snder, EventArgs e)
        {
            Console.WriteLine("Hello world");
        }
        public EventApp()
        {

            this.MyEvent += new EventHandler(MyEventHandler);
        }
        public void InvokeEvent()
        {
            if (MyEvent != null)
                MyEvent(this, null);
        }
        static void Main(string[] args)
        {
            new EventApp().InvokeEvent();
            //  EventApp ea = new EventApp();
            //  ea.InvokeEvent();
            //  이거랑 같은 의미
        }
    }
}