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
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.toright = new System.Windows.Forms.Button();
            this.toleft = new System.Windows.Forms.Button();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 12;
            this.listBox1.Items.AddRange(new object[] {
            "Button",
            "CheckBox",
            "RadioButton",
            "LinkedLabel"});
            this.listBox1.Location = new System.Drawing.Point(12, 12);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(145, 136);
            this.listBox1.TabIndex = 0;
            // 
            // toright
            // 
            this.toright.Location = new System.Drawing.Point(177, 12);
            this.toright.Name = "toright";
            this.toright.Size = new System.Drawing.Size(75, 23);
            this.toright.TabIndex = 1;
            this.toright.Text = "오른쪽";
            this.toright.UseVisualStyleBackColor = true;
            this.toright.Click += new System.EventHandler(this.toright_Click);
            // 
            // toleft
            // 
            this.toleft.Location = new System.Drawing.Point(177, 125);
            this.toleft.Name = "toleft";
            this.toleft.Size = new System.Drawing.Size(75, 23);
            this.toleft.TabIndex = 2;
            this.toleft.Text = "왼쪽";
            this.toleft.UseVisualStyleBackColor = true;
            this.toleft.Click += new System.EventHandler(this.toleft_Click);
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "TextBox",
            "Label",
            "ListBox",
            "ComboBox"});
            this.comboBox1.Location = new System.Drawing.Point(278, 15);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 20);
            this.comboBox1.TabIndex = 3;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(425, 165);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.toleft);
            this.Controls.Add(this.toright);
            this.Controls.Add(this.listBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Button toright;
        private System.Windows.Forms.Button toleft;
        private System.Windows.Forms.ComboBox comboBox1;
    }
}

