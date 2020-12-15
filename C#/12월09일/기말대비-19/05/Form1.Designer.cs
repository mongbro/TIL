namespace _05
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.agebox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.namebox = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.date = new System.Windows.Forms.ComboBox();
            this.label5 = new System.Windows.Forms.Label();
            this.month = new System.Windows.Forms.ComboBox();
            this.label4 = new System.Windows.Forms.Label();
            this.year = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.female = new System.Windows.Forms.RadioButton();
            this.male = new System.Windows.Forms.RadioButton();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.movie = new System.Windows.Forms.CheckBox();
            this.game = new System.Windows.Forms.CheckBox();
            this.readbook = new System.Windows.Forms.CheckBox();
            this.sport = new System.Windows.Forms.CheckBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.print = new System.Windows.Forms.Button();
            this.del = new System.Windows.Forms.Button();
            this.exit = new System.Windows.Forms.Button();
            this.label6 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.agebox);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.namebox);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(30, 30);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(314, 62);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "이름 및 나이";
            // 
            // agebox
            // 
            this.agebox.Location = new System.Drawing.Point(215, 20);
            this.agebox.Name = "agebox";
            this.agebox.Size = new System.Drawing.Size(72, 21);
            this.agebox.TabIndex = 8;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(180, 26);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 12);
            this.label2.TabIndex = 7;
            this.label2.Text = "나이";
            // 
            // namebox
            // 
            this.namebox.Location = new System.Drawing.Point(41, 20);
            this.namebox.Name = "namebox";
            this.namebox.Size = new System.Drawing.Size(114, 21);
            this.namebox.TabIndex = 6;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 5;
            this.label1.Text = "이름";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.label6);
            this.groupBox2.Controls.Add(this.date);
            this.groupBox2.Controls.Add(this.label5);
            this.groupBox2.Controls.Add(this.month);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.year);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Location = new System.Drawing.Point(446, 30);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(315, 62);
            this.groupBox2.TabIndex = 1;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "생년월일";
            // 
            // date
            // 
            this.date.FormattingEnabled = true;
            this.date.Location = new System.Drawing.Point(231, 23);
            this.date.Name = "date";
            this.date.Size = new System.Drawing.Size(36, 20);
            this.date.TabIndex = 14;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(273, 29);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(0, 12);
            this.label5.TabIndex = 13;
            // 
            // month
            // 
            this.month.FormattingEnabled = true;
            this.month.Location = new System.Drawing.Point(140, 23);
            this.month.Name = "month";
            this.month.Size = new System.Drawing.Size(36, 20);
            this.month.TabIndex = 12;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(182, 26);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(17, 12);
            this.label4.TabIndex = 11;
            this.label4.Text = "월";
            // 
            // year
            // 
            this.year.FormattingEnabled = true;
            this.year.Location = new System.Drawing.Point(18, 23);
            this.year.Name = "year";
            this.year.Size = new System.Drawing.Size(69, 20);
            this.year.TabIndex = 10;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(93, 26);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(17, 12);
            this.label3.TabIndex = 9;
            this.label3.Text = "년";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.female);
            this.groupBox3.Controls.Add(this.male);
            this.groupBox3.Location = new System.Drawing.Point(30, 126);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(314, 62);
            this.groupBox3.TabIndex = 1;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "성 별";
            // 
            // female
            // 
            this.female.AutoSize = true;
            this.female.Location = new System.Drawing.Point(182, 29);
            this.female.Name = "female";
            this.female.Size = new System.Drawing.Size(47, 16);
            this.female.TabIndex = 1;
            this.female.TabStop = true;
            this.female.Text = "여자";
            this.female.UseVisualStyleBackColor = true;
            // 
            // male
            // 
            this.male.AutoSize = true;
            this.male.Location = new System.Drawing.Point(53, 29);
            this.male.Name = "male";
            this.male.Size = new System.Drawing.Size(47, 16);
            this.male.TabIndex = 0;
            this.male.TabStop = true;
            this.male.Text = "남자";
            this.male.UseVisualStyleBackColor = true;
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.movie);
            this.groupBox4.Controls.Add(this.game);
            this.groupBox4.Controls.Add(this.readbook);
            this.groupBox4.Controls.Add(this.sport);
            this.groupBox4.Location = new System.Drawing.Point(446, 126);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(315, 62);
            this.groupBox4.TabIndex = 1;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "취미";
            // 
            // movie
            // 
            this.movie.AutoSize = true;
            this.movie.Location = new System.Drawing.Point(231, 29);
            this.movie.Name = "movie";
            this.movie.Size = new System.Drawing.Size(48, 16);
            this.movie.TabIndex = 3;
            this.movie.Text = "영화";
            this.movie.UseVisualStyleBackColor = true;
            // 
            // game
            // 
            this.game.AutoSize = true;
            this.game.Location = new System.Drawing.Point(166, 29);
            this.game.Name = "game";
            this.game.Size = new System.Drawing.Size(48, 16);
            this.game.TabIndex = 2;
            this.game.Text = "게임";
            this.game.UseVisualStyleBackColor = true;
            // 
            // readbook
            // 
            this.readbook.AutoSize = true;
            this.readbook.Location = new System.Drawing.Point(95, 29);
            this.readbook.Name = "readbook";
            this.readbook.Size = new System.Drawing.Size(48, 16);
            this.readbook.TabIndex = 1;
            this.readbook.Text = "독서";
            this.readbook.UseVisualStyleBackColor = true;
            // 
            // sport
            // 
            this.sport.AutoSize = true;
            this.sport.Location = new System.Drawing.Point(29, 29);
            this.sport.Name = "sport";
            this.sport.Size = new System.Drawing.Size(48, 16);
            this.sport.TabIndex = 0;
            this.sport.Text = "운동";
            this.sport.UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(30, 211);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.ReadOnly = true;
            this.textBox1.Size = new System.Drawing.Size(731, 120);
            this.textBox1.TabIndex = 0;
            // 
            // print
            // 
            this.print.Location = new System.Drawing.Point(30, 337);
            this.print.Name = "print";
            this.print.Size = new System.Drawing.Size(75, 23);
            this.print.TabIndex = 2;
            this.print.Text = "출력";
            this.print.UseVisualStyleBackColor = true;
            this.print.Click += new System.EventHandler(this.print_Click);
            // 
            // del
            // 
            this.del.Location = new System.Drawing.Point(349, 337);
            this.del.Name = "del";
            this.del.Size = new System.Drawing.Size(75, 23);
            this.del.TabIndex = 3;
            this.del.Text = "지우기";
            this.del.UseVisualStyleBackColor = true;
            this.del.Click += new System.EventHandler(this.del_Click);
            // 
            // exit
            // 
            this.exit.Location = new System.Drawing.Point(686, 337);
            this.exit.Name = "exit";
            this.exit.Size = new System.Drawing.Size(75, 23);
            this.exit.TabIndex = 4;
            this.exit.Text = "종료";
            this.exit.UseVisualStyleBackColor = true;
            this.exit.Click += new System.EventHandler(this.exit_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(273, 26);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(17, 12);
            this.label6.TabIndex = 15;
            this.label6.Text = "일";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.exit);
            this.Controls.Add(this.del);
            this.Controls.Add(this.print);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox agebox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox namebox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.ComboBox date;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.ComboBox month;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.ComboBox year;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.RadioButton female;
        private System.Windows.Forms.RadioButton male;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.CheckBox movie;
        private System.Windows.Forms.CheckBox game;
        private System.Windows.Forms.CheckBox readbook;
        private System.Windows.Forms.CheckBox sport;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button print;
        private System.Windows.Forms.Button del;
        private System.Windows.Forms.Button exit;
        private System.Windows.Forms.Label label6;
    }
}

