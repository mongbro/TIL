using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            for (int i = 2000; i < 2020; i++)
                year.Items.Add(i);
            for (int i = 1; i < 13; i++)
                month.Items.Add(i);
            for (int i = 1; i < 32; i++)
                date.Items.Add(i);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Boolean check = true;
            if(namebox.Text.ToString() == "" || agebox.Text == "")
            {
                check = false;
                MessageBox.Show("이름, 나이를 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Error);
            }
            if (!male.Checked && !female.Checked)
            {
                check = false;
                MessageBox.Show("성별을 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Error);
            }
            if(year.SelectedItem == null || month.SelectedItem == null || date.SelectedItem == null)
            {
                check = false;
                MessageBox.Show("생년월일을 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Error);
            }
            if(check == true)
            {
                textBox1.Text = "";
                string str = "";
                str += "이름 : " + namebox.Text + "\r\n";
                str += "나이 : " + agebox.Text + "\r\n";
                if (male.Checked)
                    str += "성별 : 남자\r\n";
                else
                    str += "성별 : 여자\r\n";
                str += "생년월일 : " + year.Text + "년 " + month.Text + "월 " + date.Text + "일\r\n";
                str += "취미 : ";
                if (sports.Checked)
                    str += "운동 ";
                if (readbook.Checked)
                    str += "독서 ";
                if (game.Checked)
                    str += "게임 ";
                if (movie.Checked)
                    str += "영화 ";
                textBox1.Text = str;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            namebox.Text = "";
            agebox.Text = "";
            year.SelectedItem = null;
            month.SelectedItem = null;
            date.SelectedItem = null;
            male.Checked = false;
            female.Checked = false;
            sports.Checked = false;
            readbook.Checked = false;
            game.Checked = false;
            movie.Checked = false;
            textBox1.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
