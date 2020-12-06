using System;
using System.Net.Sockets;

namespace Client {
    internal class ClientSocket {

        private static void Main(string[] args) {
            // connect to server running on localhost at port no. 3000
            TcpClient client = new TcpClient("localhost", 3000);
            NetworkStream networkStream = client.GetStream();  // get stream from server

            byte[] buffer = new byte[1000];   // create byte array to receive data

            // Console.WriteLine("Type 'small' for small file, 'big' for big file");
            // string choice = Console.ReadLine();
            // buffer = System.Text.Encoding.ASCII.GetBytes(choice);
            // networkStream.Write(buffer, 0, choice.Length); // write to stream

            // buffer = null;

            networkStream.Read(buffer, 0, 1000);  // read data from stream into byte array
            string recievedText = System.Text.Encoding.ASCII.GetString(buffer);   // convert byte array to string
            Console.WriteLine(recievedText);

            client.Close();
        }
    }
}