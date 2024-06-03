using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "Hello World";

        }

        // 1부터 n까지 합을 구하여 Label1에 출력
        // Label2에는 이 연산을 수행한 횟수를 출력
        private void btnSum_Click(object sender, EventArgs e)
        {

            double sum = 0;
            double n = Convert.ToDouble(txtResult.Text);
            int i = 0;

            for (i = 0; i< n; i++)
            {
                sum += i + 1;
            }

            lbl1.Text = "1부터 "+ n + "까지의 합:" + sum;
            lbl2.Text = "수행한 횟수: "+(i-1);
        }

        // 3의 배수만 “박수”라고 출력
        private void btnMultipleThree_Click(object sender, EventArgs e)
        {
            for(int i= 1; i<=10; i++)
            {
                if(i % 3 == 0)
                    lblThreeResult.Text += "박수 ";
                else
                    lblThreeResult.Text += i + " ";

            }
        }
    }
}
