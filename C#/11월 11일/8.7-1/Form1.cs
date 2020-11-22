using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _8._7_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void style_strikeout_CheckedChanged(object sender, EventArgs e)
        {
            Font thisfont = changetext.Font;
            Font font2 = thisfont;
            if (style_strikeout.Checked)
            {
                changetext.Font = new Font(thisfont, thisfont.Style | FontStyle.Strikeout | FontStyle.Regular);
            }
            else
            {
                font2 = new Font(thisfont, FontStyle.Regular);
                if (changetext.Font.Bold)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Bold);
                }
                if (changetext.Font.Italic)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Italic);
                }
                if (changetext.Font.Underline)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Underline);
                }
                changetext.Font = new Font(font2, font2.Style);
            }
        }

        private void style_italic_CheckedChanged(object sender, EventArgs e)
        {
            Font thisfont = changetext.Font;
            Font font2 = thisfont;
            if (style_italic.Checked)
            {
                changetext.Font = new Font(thisfont, thisfont.Style | FontStyle.Italic);
            }
            else
            {
                font2 = new Font(thisfont, FontStyle.Regular);
                if (changetext.Font.Bold)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Bold);
                }
                if (changetext.Font.Strikeout)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Strikeout);
                }
                if (changetext.Font.Underline)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Underline);
                }
                changetext.Font = new Font(font2, font2.Style);
            }
        }

        private void style_underline_CheckedChanged(object sender, EventArgs e)
        {
            Font thisfont = changetext.Font;
            Font font2 = thisfont;
            if (style_underline.Checked)
            {
                changetext.Font = new Font(thisfont, thisfont.Style | FontStyle.Underline);
            }
            else
            {
                font2 = new Font(thisfont, FontStyle.Regular);
                if (changetext.Font.Bold)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Bold);
                }
                if (changetext.Font.Strikeout)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Strikeout);
                }
                if (changetext.Font.Italic)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Italic);
                }
                changetext.Font = new Font(font2, font2.Style);
            }
        }

        private void style_bold_CheckedChanged(object sender, EventArgs e)
        {
            Font thisfont = changetext.Font;
            Font font2 = thisfont;
            if (style_bold.Checked)
            {
                changetext.Font = new Font(thisfont, thisfont.Style | FontStyle.Bold);
            }
            else
            {
                font2 = new Font(thisfont, FontStyle.Regular);
                if (changetext.Font.Underline)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Underline);
                }
                if (changetext.Font.Strikeout)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Strikeout);
                }
                if (changetext.Font.Italic)
                {
                    font2 = new Font(thisfont, font2.Style | FontStyle.Italic);
                }
                changetext.Font = new Font(font2, font2.Style);
            }
        }

        private void Align_left_CheckedChanged(object sender, EventArgs e)
        {
            changetext.TextAlign = ContentAlignment.MiddleLeft;
        }
        private void Align_right_CheckedChanged(object sender, EventArgs e)
        {
            changetext.TextAlign = ContentAlignment.MiddleRight;
        }

        private void Align_center_CheckedChanged(object sender, EventArgs e)
        {
            changetext.TextAlign = ContentAlignment.MiddleCenter;
        }

    }
}
