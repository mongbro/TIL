﻿namespace _02
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
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.addbtn = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.subbtn = new System.Windows.Forms.Button();
            this.mulbtn = new System.Windows.Forms.Button();
            this.divbtn = new System.Windows.Forms.Button();
            this.modbtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(103, 34);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(109, 21);
            this.textBox1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(36, 37);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(61, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "첫 번째 값";
            // 
            // addbtn
            // 
            this.addbtn.Location = new System.Drawing.Point(38, 179);
            this.addbtn.Name = "addbtn";
            this.addbtn.Size = new System.Drawing.Size(21, 23);
            this.addbtn.TabIndex = 2;
            this.addbtn.Text = "+";
            this.addbtn.UseVisualStyleBackColor = true;
            this.addbtn.Click += new System.EventHandler(this.addbtn_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(36, 84);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(61, 12);
            this.label2.TabIndex = 4;
            this.label2.Text = "두 번째 값";
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(103, 81);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(109, 21);
            this.textBox2.TabIndex = 3;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(36, 138);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(45, 12);
            this.label3.TabIndex = 6;
            this.label3.Text = "결과 값";
            // 
            // textBox3
            // 
            this.textBox3.Location = new System.Drawing.Point(103, 135);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(109, 21);
            this.textBox3.TabIndex = 5;
            // 
            // subbtn
            // 
            this.subbtn.Location = new System.Drawing.Point(76, 179);
            this.subbtn.Name = "subbtn";
            this.subbtn.Size = new System.Drawing.Size(21, 23);
            this.subbtn.TabIndex = 7;
            this.subbtn.Text = "-";
            this.subbtn.UseVisualStyleBackColor = true;
            this.subbtn.Click += new System.EventHandler(this.subbtn_Click);
            // 
            // mulbtn
            // 
            this.mulbtn.Location = new System.Drawing.Point(113, 179);
            this.mulbtn.Name = "mulbtn";
            this.mulbtn.Size = new System.Drawing.Size(21, 23);
            this.mulbtn.TabIndex = 8;
            this.mulbtn.Text = "*";
            this.mulbtn.UseVisualStyleBackColor = true;
            this.mulbtn.Click += new System.EventHandler(this.mulbtn_Click);
            // 
            // divbtn
            // 
            this.divbtn.Location = new System.Drawing.Point(154, 179);
            this.divbtn.Name = "divbtn";
            this.divbtn.Size = new System.Drawing.Size(21, 23);
            this.divbtn.TabIndex = 9;
            this.divbtn.Text = "/";
            this.divbtn.UseVisualStyleBackColor = true;
            this.divbtn.Click += new System.EventHandler(this.divbtn_Click);
            // 
            // modbtn
            // 
            this.modbtn.Location = new System.Drawing.Point(191, 179);
            this.modbtn.Name = "modbtn";
            this.modbtn.Size = new System.Drawing.Size(21, 23);
            this.modbtn.TabIndex = 10;
            this.modbtn.Text = "%";
            this.modbtn.UseVisualStyleBackColor = true;
            this.modbtn.Click += new System.EventHandler(this.modbtn_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(238, 238);
            this.Controls.Add(this.modbtn);
            this.Controls.Add(this.divbtn);
            this.Controls.Add(this.mulbtn);
            this.Controls.Add(this.subbtn);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.addbtn);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox1);
            this.Name = "Form1";
            this.Text = "Exam3";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button addbtn;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.Button subbtn;
        private System.Windows.Forms.Button mulbtn;
        private System.Windows.Forms.Button divbtn;
        private System.Windows.Forms.Button modbtn;
    }
}

