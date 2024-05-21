using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Net;
using System.Net.Sockets; // 소켓 가져옴
using System.IO; // 데이터를 주고 받는것
using System.Threading; // 스레드 사용

namespace TCPServer
{
    public partial class Form1 : Form
    {
        TcpListener Server; // 서버 소켓
        TcpClient Client;   // 클라이언트 소켓
        StreamReader Reader; 
        StreamWriter Writer;    // 데이터 주고 받기
        NetworkStream stream;   // 네트워크 연결 스트림
        Thread receiveThread;   // 스레드 객체를 받아주는 변수
        bool Connected;     // 접속 상태 변수

        private delegate void AddTextDelegate(string strText);  // 크로스 스레드

        public Form1()
        {
            InitializeComponent();
        }

        private void btnSend_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {


            ThreadStart ts = new ThreadStart(Listen);

            
        }

        private void Listen()
        {

        }
    }
}
