using MongoDB.Bson;
using MongoDB.Driver;
using PracticaMongoDB.Classes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace PracticaMongoDB.Pages
{
    /// <summary>
    /// Interaction logic for AirportsPage.xaml
    /// </summary>
    public partial class AirportsPage : Page
    {
        public AirportsPage()
        {
            InitializeComponent();
            
        }
            //var document = await collection.Find(new Airport()).ToListAsync();
            //foreach (BsonDocument doc in document)
            //{
            //    dataGrid.ItemsSource = doc;
            //}

        private async void Page_Loaded(object sender, RoutedEventArgs e)
        {
            string connectionString = "mongodb://127.0.0.1:27017";
            var client = new MongoClient(connectionString);
            var dataBase = client.GetDatabase("AirportDB");
            var collection = dataBase.GetCollection<Airport>("Airports");
            var docs = await collection.Find(filter => filter._name != "").ToListAsync();
            foreach (var item in docs)
            {
                datagrid.Text += Airport.ToStr(item);
            }
            //datagrid.Text = airports.ToString();
        }
    }
}
