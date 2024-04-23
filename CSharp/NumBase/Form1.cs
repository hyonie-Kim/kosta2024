using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace NumBase
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnInt_Click(object sender, EventArgs e)
        {
            //이벤트 핸들러가 자동으로 만들어짐
            int value = 100;
            lblResult.Text= value.ToString();

        }

        private void button2_Click(object sender, EventArgs e)
        {

        }
    }
}
