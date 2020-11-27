using MongoDB.Bson.Serialization.Attributes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaMongoDB.Classes
{
    public class Airport
    {
        [BsonId]
        public int _id;
        [BsonElement("name")]
        public string _name;
        [BsonIgnoreIfDefault]
        [BsonElement("country")]
        public string _country;
        [BsonIgnoreIfDefault]
        [BsonElement("termcount")]
        public string _termcount;
        public Airport() { }
        public Airport(string name, string country, string termcount)
        {
            _name = name;
            _country = country;
            _termcount = termcount;
        }
        public static string ToStr(Airport airport)
        {
            StringBuilder str=new StringBuilder();
            str.Append("ID: "+airport._id);
            str.Append("\tНазвание: "+airport._name);
            str.Append("\tСтрана: "+airport._country);
            str.Append("\tКол-во терминалов: "+airport._termcount + "\n");
            return str.ToString();
        }
    }
}
