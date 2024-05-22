using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 선그리기
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;

            // 사각형
            Pen p = new Pen(Color.Blue, 10);
            Rectangle rc1 = new Rectangle(30,20,200,200);
            // g.DrawRectangle(p, rc1); // 사각형
            g.DrawEllipse(p, rc1); // 원

            Brush b = new SolidBrush(Color.Orange);
            Rectangle rc2 = new Rectangle(260, 10, 200, 200);
            g.FillRectangle(b, rc2);
        }
    }
}
