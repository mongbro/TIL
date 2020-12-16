namespace _19_5
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
            this.day = new System.Windows.Forms.ComboBox();
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
            this.add = new System.Windows.Forms.Button();
            this.delete = new System.Windows.Forms.Button();
            this.exit = new System.Windows.Forms.Button();
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
            this.groupBox1.Size = new System.Drawing.Size(290, 100);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "groupBox1";
            // 
            // agebox
            // 
            this.agebox.Location = new System.Drawing.Point(195, 37);
            this.agebox.Name = "agebox";
            this.agebox.Size = new System.Drawing.Size(89, 21);
            this.agebox.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(149, 40);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "나이";
            // 
            // namebox
            // 
            this.namebox.Location = new System.Drawing.Point(52, 37);
            this.namebox.Name = "namebox";
            this.namebox.Size = new System.Drawing.Size(89, 21);
            this.namebox.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 40);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "이름";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.day);
            this.groupBox2.Controls.Add(this.label5);
            this.groupBox2.Controls.Add(this.month);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.year);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Location = new System.Drawing.Point(379, 12);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(290, 100);
            this.groupBox2.TabIndex = 1;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "groupBox2";
            // 
            // day
            // 
            this.day.FormattingEnabled = true;
            this.day.Location = new System.Drawing.Point(200, 38);
            this.day.Name = "day";
            this.day.Size = new System.Drawing.Size(27, 20);
            this.day.TabIndex = 9;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(233, 41);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(17, 12);
            this.label5.TabIndex = 8;
            this.label5.Text = "일";
            // 
            // month
            // 
            this.month.FormattingEnabled = true;
            this.month.Location = new System.Drawing.Point(144, 37);
            this.month.Name = "month";
            this.month.Size = new System.Drawing.Size(27, 20);
            this.month.TabIndex = 7;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(177, 40);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(17, 12);
            this.label4.TabIndex = 6;
            this.label4.Text = "월";
            // 
            // year
            // 
            this.year.FormattingEnabled = true;
            this.year.Location = new System.Drawing.Point(33, 37);
            this.year.Name = "year";
            this.year.Size = new System.Drawing.Size(76, 20);
            this.year.TabIndex = 5;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(111, 40);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(17, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "년";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.female);
            this.groupBox3.Controls.Add(this.male);
            this.groupBox3.Location = new System.Drawing.Point(12, 130);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(290, 100);
            this.groupBox3.TabIndex = 1;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "groupBox3";
            // 
            // female
            // 
            this.female.AutoSize = true;
            this.female.Location = new System.Drawing.Point(151, 44);
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
            this.male.Location = new System.Drawing.Point(39, 45);
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
            this.groupBox4.Location = new System.Drawing.Point(379, 130);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(290, 100);
            this.groupBox4.TabIndex = 1;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "groupBox4";
            // 
            // movie
            // 
            this.movie.AutoSize = true;
            this.movie.Location = new System.Drawing.Point(215, 46);
            this.movie.Name = "movie";
            this.movie.Size = new System.Drawing.Size(48, 16);
            this.movie.TabIndex = 3;
            this.movie.Text = "영화";
            this.movie.UseVisualStyleBackColor = true;
            // 
            // game
            // 
            this.game.AutoSize = true;
            this.game.Location = new System.Drawing.Point(144, 45);
            this.game.Name = "game";
            this.game.Size = new System.Drawing.Size(48, 16);
            this.game.TabIndex = 2;
            this.game.Text = "게임";
            this.game.UseVisualStyleBackColor = true;
            // 
            // readbook
            // 
            this.readbook.AutoSize = true;
            this.readbook.Location = new System.Drawing.Point(86, 46);
            this.readbook.Name = "readbook";
            this.readbook.Size = new System.Drawing.Size(48, 16);
            this.readbook.TabIndex = 1;
            this.readbook.Text = "독서";
            this.readbook.UseVisualStyleBackColor = true;
            // 
            // sport
            // 
            this.sport.AutoSize = true;
            this.sport.Location = new System.Drawing.Point(17, 46);
            this.sport.Name = "sport";
            this.sport.Size = new System.Drawing.Size(48, 16);
            this.sport.TabIndex = 0;
            this.sport.Text = "운동";
            this.sport.UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(12, 246);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.ReadOnly = true;
            this.textBox1.Size = new System.Drawing.Size(657, 143);
            this.textBox1.TabIndex = 2;
            // 
            // add
            // 
            this.add.Location = new System.Drawing.Point(12, 395);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(75, 23);
            this.add.TabIndex = 3;
            this.add.Text = "출력";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // delete
            // 
            this.delete.Location = new System.Drawing.Point(297, 395);
            this.delete.Name = "delete";
            this.delete.Size = new System.Drawing.Size(75, 23);
            this.delete.TabIndex = 4;
            this.delete.Text = "지우기";
            this.delete.UseVisualStyleBackColor = true;
            this.delete.Click += new System.EventHandler(this.delete_Click);
            // 
            // exit
            // 
            this.exit.Location = new System.Drawing.Point(594, 395);
            this.exit.Name = "exit";
            this.exit.Size = new System.Drawing.Size(75, 23);
            this.exit.TabIndex = 5;
            this.exit.Text = "종료";
            this.exit.UseVisualStyleBackColor = true;
            this.exit.Click += new System.EventHandler(this.exit_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(682, 430);
            this.Controls.Add(this.exit);
            this.Controls.Add(this.delete);
            this.Controls.Add(this.add);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
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
        private System.Windows.Forms.ComboBox day;
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
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.Button delete;
        private System.Windows.Forms.Button exit;
    }
}

