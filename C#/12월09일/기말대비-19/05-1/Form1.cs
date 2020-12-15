using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _05_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void print_Click(object sender, EventArgs e)
        {
            textBox3.Text = "";
            Boolean check = true;
            if(namebox.Text == "" || agebox.Text == "")
            {
                check = false;
                MessageBox.Show("이름, 나이를 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
            }
            if(!male.Checked && !female.Checked)
            {
                check = false;
                MessageBox.Show("성별을 선택하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
            }
            if(year.SelectedItem == null || month.SelectedItem == null || date.SelectedItem == null)
            {
                check = false;
                MessageBox.Show("생년월일을 입력하세요", "입력오류", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
            }
            if(check == true)
            {
                textBox3.Text += "이름 : " + namebox.Text + "\r\n";
                textBox3.Text += "나이 : " + agebox.Text + "\r\n";
                if (male.Checked)
                    textBox3.Text += "성별 : 남자\r\n";
                else
                    textBox3.Text += "성별 : 여자\r\n";
                textBox3.Text += "생년월일 : " + year.Text + "년 " + month.Text + "월 " + date.Text + "일\r\n";
                textBox3.Text += "취미 : ";
                if (sport.Checked)
                    textBox3.Text += "운동 ";
                if (readbook.Checked)
                    textBox3.Text += "독서 ";
                if (game.Checked)
                    textBox3.Text += "게임 ";
                if (movie.Checked)
                    textBox3.Text += "영화 ";
            }
        }

        private void delete_Click(object sender, EventArgs e)
        {
            textBox3.Text = "";
            namebox.Text = "";
            agebox.Text = "";
            male.Checked = false;
            female.Checked = false;
            year.SelectedItem = null;
            month.SelectedItem = null;
            date.SelectedItem = null;
            sport.Checked = false;
            readbook.Checked = false;
            game.Checked = false;
            movie.Checked = false;
        }

        private void exit_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            for (int i = 2000; i < 2020; i++)
                year.Items.Add(i);
            for(int i = 1; i < 13; i++)
                month.Items.Add(i);
            for (int i = 1; i < 32; i++)
                date.Items.Add(i);
        }
    }
}
