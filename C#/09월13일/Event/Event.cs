using System;

namespace Event
{
    class Event
    {
        public EventHandler MyEvent;
        void MyEventHandler(object sender, EventArgs e)
        {
            Console.WriteLine("Hello World");
        }
        public Event()
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
            new Event().InvokeEvent();
        }
    }
}
