using System;

class Event
{
    public EventHandler MyEvent;
    void MyEventHandler(object sender, EventArgs e)
    {
        Console.WriteLine("Event Working...");
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
}
namespace Event2
{
    class Program
    {
        static void Main(string[] args)
        {
            new Event().InvokeEvent();
        }
    }
}
