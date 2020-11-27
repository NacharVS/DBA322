using MongoDB.Bson.Serialization.Attributes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaMongoDB.Classes
{
    public class Plane
    {
        [BsonId]
        public int _id;
        [BsonElement("name")]
        public string _name;
        [BsonIgnoreIfDefault]
        [BsonElement("number")]
        public string _number;
        [BsonIgnoreIfDefault]
        [BsonElement("airportID")]
        public string _airportID;
        public Plane() { }
        public Plane(string name, string number, string airportID)
        {
            _name = name;
            _number = number;
            _airportID = airportID;
        }
        public static string ToStr(Plane plane)
        {
            StringBuilder str = new StringBuilder();
            str.Append("ID: " + plane._id);
            str.Append("\tНазвание: " + plane._name);
            str.Append("\tБортовой номер: " + plane._number);
            str.Append("\tID аэропорта: " + plane._airportID + "\n");
            return str.ToString();
        }
    }
}
