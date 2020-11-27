using MongoDB.Bson.Serialization.Attributes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaMongoDB.Classes
{
    public class Pilot
    {
        [BsonId]
        public int _id;
        [BsonElement("name")]
        public string _name;
        [BsonIgnoreIfDefault]
        [BsonElement("plane")]
        public string _plane;
        [BsonIgnoreIfDefault]
        [BsonElement("orientation")]
        public string _orientation;
        public Pilot() { }
        public Pilot(string name, string plane, string ori)
        {
            _name = name;
            _plane = plane;
            _orientation = ori;
        }
        public static string ToStr(Pilot pilot)
        {
            StringBuilder str = new StringBuilder();
            str.Append("ID: " + pilot._id);
            str.Append("\tИмя: " + pilot._name);
            str.Append("\tID самолета: " + pilot._plane);
            str.Append("\tОриентация: " + pilot._orientation + "\n");
            return str.ToString();
        }
    }
}
