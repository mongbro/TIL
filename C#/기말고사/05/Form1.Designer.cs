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
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.namebox = new System.Windows.Forms.TextBox();
            this.agebox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.year = new System.Windows.Forms.ComboBox();
            this.month = new System.Windows.Forms.ComboBox();
            this.date = new System.Windows.Forms.ComboBox();
            this.male = new System.Windows.Forms.RadioButton();
            this.female = new System.Windows.Forms.RadioButton();
            this.sports = new System.Windows.Forms.CheckBox();
            this.readbook = new System.Windows.Forms.CheckBox();
            this.game = new System.Windows.Forms.CheckBox();
            this.movie = new System.Windows.Forms.CheckBox();
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
            this.groupBox1.Location = new System.Drawing.Point(12, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(335, 141);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "이름 및 나이";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.date);
            this.groupBox2.Controls.Add(this.month);
            this.groupBox2.Controls.Add(this.year);
            this.groupBox2.Controls.Add(this.label5);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Location = new System.Drawing.Point(453, 12);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(335, 141);
            this.groupBox2.TabIndex = 1;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "생년월일";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.movie);
            this.groupBox3.Controls.Add(this.game);
            this.groupBox3.Controls.Add(this.readbook);
            this.groupBox3.Controls.Add(this.sports);
            this.groupBox3.Location = new System.Drawing.Point(453, 172);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(335, 141);
            this.groupBox3.TabIndex = 3;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "취 미";
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.female);
            this.groupBox4.Controls.Add(this.male);
            this.groupBox4.Location = new System.Drawing.Point(12, 172);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(335, 141);
            this.groupBox4.TabIndex = 2;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "성 별";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(12, 319);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(776, 207);
            this.textBox1.TabIndex = 4;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 532);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 5;
            this.button1.Text = "출력";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(349, 532);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 6;
            this.button2.Text = "지우기";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(713, 532);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(75, 23);
            this.button3.TabIndex = 7;
            this.button3.Text = "종료";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(19, 62);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "이름";
            // 
            // namebox
            // 
            this.namebox.Location = new System.Drawing.Point(63, 59);
            this.namebox.Name = "namebox";
            this.namebox.Size = new System.Drawing.Size(100, 21);
            this.namebox.TabIndex = 1;
            // 
            // agebox
            // 
            this.agebox.Location = new System.Drawing.Point(212, 62);
            this.agebox.Name = "agebox";
            this.agebox.Size = new System.Drawing.Size(100, 21);
            this.agebox.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(168, 65);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "나이";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(93, 62);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(17, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "년";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(176, 63);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(17, 12);
            this.label4.TabIndex = 5;
            this.label4.Text = "월";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(242, 62);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(17, 12);
            this.label5.TabIndex = 6;
            this.label5.Text = "일";
            // 
            // year
            // 
            this.year.FormattingEnabled = true;
            this.year.Location = new System.Drawing.Point(7, 57);
            this.year.Name = "year";
            this.year.Size = new System.Drawing.Size(80, 20);
            this.year.TabIndex = 7;
            // 
            // month
            // 
            this.month.FormattingEnabled = true;
            this.month.Location = new System.Drawing.Point(124, 57);
            this.month.Name = "month";
            this.month.Size = new System.Drawing.Size(35, 20);
            this.month.TabIndex = 8;
            // 
            // date
            // 
            this.date.FormattingEnabled = true;
            this.date.Location = new System.Drawing.Point(199, 57);
            this.date.Name = "date";
            this.date.Size = new System.Drawing.Size(37, 20);
            this.date.TabIndex = 9;
            // 
            // male
            // 
            this.male.AutoSize = true;
            this.male.Location = new System.Drawing.Point(54, 62);
            this.male.Name = "male";
            this.male.Size = new System.Drawing.Size(47, 16);
            this.male.TabIndex = 0;
            this.male.TabStop = true;
            this.male.Text = "남자";
            this.male.UseVisualStyleBackColor = true;
            // 
            // female
            // 
            this.female.AutoSize = true;
            this.female.Location = new System.Drawing.Point(184, 62);
            this.female.Name = "female";
            this.female.Size = new System.Drawing.Size(47, 16);
            this.female.TabIndex = 1;
            this.female.TabStop = true;
            this.female.Text = "여자";
            this.female.UseVisualStyleBackColor = true;
            // 
            // sports
            // 
            this.sports.AutoSize = true;
            this.sports.Location = new System.Drawing.Point(31, 62);
            this.sports.Name = "sports";
            this.sports.Size = new System.Drawing.Size(48, 16);
            this.sports.TabIndex = 0;
            this.sports.Text = "운동";
            this.sports.UseVisualStyleBackColor = true;
            // 
            // readbook
            // 
            this.readbook.AutoSize = true;
            this.readbook.Location = new System.Drawing.Point(95, 62);
            this.readbook.Name = "readbook";
            this.readbook.Size = new System.Drawing.Size(48, 16);
            this.readbook.TabIndex = 1;
            this.readbook.Text = "독서";
            this.readbook.UseVisualStyleBackColor = true;
            // 
            // game
            // 
            this.game.AutoSize = true;
            this.game.Location = new System.Drawing.Point(166, 62);
            this.game.Name = "game";
            this.game.Size = new System.Drawing.Size(48, 16);
            this.game.TabIndex = 2;
            this.game.Text = "게임";
            this.game.UseVisualStyleBackColor = true;
            // 
            // movie
            // 
            this.movie.AutoSize = true;
            this.movie.Location = new System.Drawing.Point(233, 63);
            this.movie.Name = "movie";
            this.movie.Size = new System.Drawing.Size(48, 16);
            this.movie.TabIndex = 3;
            this.movie.Text = "영화";
            this.movie.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 560);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Form1";
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
        private System.Windows.Forms.ComboBox month;
        private System.Windows.Forms.ComboBox year;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.CheckBox movie;
        private System.Windows.Forms.CheckBox game;
        private System.Windows.Forms.CheckBox readbook;
        private System.Windows.Forms.CheckBox sports;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.RadioButton female;
        private System.Windows.Forms.RadioButton male;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
    }
}

