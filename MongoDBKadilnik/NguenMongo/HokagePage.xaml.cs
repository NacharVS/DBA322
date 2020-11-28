using MongoDB.Driver;
using System;
using System.Collections.Generic;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace NguenMongo
{
    /// <summary>
    /// Логика взаимодействия для HokagePage.xaml
    /// </summary>
    public partial class HokagePage : Page
    {
        public HokagePage()
        {
            InitializeComponent();
        }

        private async void Page_Loaded(object sender, RoutedEventArgs e)
        {
            string connectionString = "mongodb://127.0.0.1:27017";
            var client = new MongoClient(connectionString);
            var dataBase = client.GetDatabase("Konoha");
            var collection = dataBase.GetCollection<Hokage>("Hokage");
            var docs = await collection.Find(filter => filter._name != "").ToListAsync();
            foreach (var item in docs)
            {
                datagrid.Text += Hokage.ToStr(item);
            }
        }

        private  void AddBtn_Click(object sender, RoutedEventArgs e)
        {
            //string connectionString = "mongodb://localhost";
            //var client = new MongoClient(connectionString);
            //var database = client.GetDatabase("Konoha");
            //var collection = database.GetCollection<Hokage>("hokage");
            //var docs =  collection.InsertOne( new Hokage("Hiruzen", "Sarutobi", 46, "Shinobi no kami"));
        }

        private async void EditBtn_Click(object sender, RoutedEventArgs e)
        {
            string connectionString = "mongodb://localhost";
            var client = new MongoClient(connectionString);
            var database = client.GetDatabase("Konoha");
            var collection = database.GetCollection<Hokage>("hokage");
            var docs = await collection.ReplaceOneAsync(filter => filter._name == "the Third", new Hokage("Hiruzen", "Sarutobi", 46, "Shinobi no kami"));
        }

        private async void DelBtn_Click(object sender, RoutedEventArgs e)
        {
            //string connectionString = "mongodb://localhost";
            //var client = new MongoClient(connectionString);
            //var database = client.GetDatabase("Konoha");
            //var collection = database.GetCollection<Hokage>("hokage");
            //var docs = await collection.DeleteOneAsync(filter=>filter=Hokage.ToStr(hokage1));
        }
    }
}
