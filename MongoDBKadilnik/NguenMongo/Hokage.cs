using MongoDB.Bson;
using MongoDB.Bson.Serialization.Attributes;
using System;
using System.Collections.Generic;
using System.Text;

namespace NguenMongo
{
    class Hokage
    {
        [BsonId]
        [BsonIgnoreIfDefault]
        [BsonElement("id")]
        public ObjectId _id;
        [BsonElement("First_Name")]
        public string _name;
        [BsonElement("Last_Name")]
        public string _surname;
        public int _yearsOnPost;
        [BsonIgnoreIfNull]
        public string _sobriquet;
        public Hokage(string name, string surname, int yearsOnPost, string sobriquet)
        {
            _name = name;
            _surname = surname;
            _yearsOnPost = yearsOnPost;
            _sobriquet = sobriquet;
        }
        public Hokage(string name, string surname, int yearsOnPost)
        {
            _name = name;
            _surname = surname;
            _yearsOnPost = yearsOnPost;
        }
        public static string ToStr(Hokage hokage)
        {
            StringBuilder str = new StringBuilder();
            str.Append("Id " + hokage._id);
            str.Append("Имя " + hokage._name);
            str.Append("\tФамилия: " + hokage._surname);
            str.Append("\tЛетНаПосту: " + hokage._yearsOnPost);
            str.Append("\tПрозвище: " + hokage._sobriquet + "\n");
            return str.ToString();
        }
    }
}

