using System;
using System.IO;
using System.Net.Sockets;

namespace Server {
    internal class ServerSocket {

        [Obsolete]
        private static void Main(string[] args) {
            //Byte[] bytes = new byte[5];
            //int i = 0;
            //string dataReceived = null;
            string smallFile = @"small.txt";
            string largeFile = @"big.txt";
           // string dataToSend = File.ReadAllText(smallFile);

            TcpListener listener = new TcpListener(3000);  // listens on port number 3000
            listener.Start();   // start listener

            Console.WriteLine("Server has started.Waiting for clients...");
            while (true) {
                TcpClient client = listener.AcceptTcpClient();   // wait for client to make request
                NetworkStream networkStream = client.GetStream();  // access steam to send data back and forth.

                //while ((i = networkStream.Read(bytes, 0, bytes.Length)) != 0) {
                //    Console.WriteLine("Calling read in input");
                //    dataReceived = System.Text.Encoding.ASCII.GetString(bytes, 0, 5);
                //    Console.WriteLine("Data received");
                //}

                //dataReceived = dataReceived.ToLower();

                //Console.WriteLine("Calling choices for file");
                //if (dataReceived == "big") {
                //    dataToSend = File.ReadAllText(largeFile);
                //} else if (dataReceived == "small") {
                //    dataToSend = File.ReadAllText(smallFile);
                //}

                // string dataToSend = DateTime.Now.ToLongDateString();   // get system date and convert it to string

                // This works and sends the large or small file by changing the variable
                 string dataToSend = File.ReadAllText(largeFile);

                byte[] buffer = System.Text.Encoding.ASCII.GetBytes(dataToSend);  // convert string to an array of bytes

                networkStream.Write(buffer, 0, dataToSend.Length);  // write to stream
                client.Close();
            }
        } // Main()
    } // end of class
}  // end of namespace