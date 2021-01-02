using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Control
{
    public class CommandProcessor
    {
        private List<(Func<bool> condition, Action action)> Commands = new List<(Func<bool> condition, Action action)>();
        public void Add(Func<bool> condition, Action action)
        {
            Commands.Add((condition, action));
        }

        public void Process()
        {
            foreach (var command in Commands)
            {
                if (command.condition.Invoke()) command.action.Invoke();
            }
        }
    }
}