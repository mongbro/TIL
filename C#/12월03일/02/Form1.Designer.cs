namespace _02
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
            this.addbtn = new System.Windows.Forms.Button();
            this.subbtn = new System.Windows.Forms.Button();
            this.divbtn = new System.Windows.Forms.Button();
            this.mulbtn = new System.Windows.Forms.Button();
            this.modbtn = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.value1 = new System.Windows.Forms.TextBox();
            this.value2 = new System.Windows.Forms.TextBox();
            this.value3 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // addbtn
            // 
            this.addbtn.Location = new System.Drawing.Point(45, 159);
            this.addbtn.Name = "addbtn";
            this.addbtn.Size = new System.Drawing.Size(25, 24);
            this.addbtn.TabIndex = 0;
            this.addbtn.Text = "+";
            this.addbtn.UseVisualStyleBackColor = true;
            this.addbtn.Click += new System.EventHandler(this.addbtn_Click);
            // 
            // subbtn
            // 
            this.subbtn.Location = new System.Drawing.Point(98, 159);
            this.subbtn.Name = "subbtn";
            this.subbtn.Size = new System.Drawing.Size(25, 24);
            this.subbtn.TabIndex = 1;
            this.subbtn.Text = "-";
            this.subbtn.UseVisualStyleBackColor = true;
            this.subbtn.Click += new System.EventHandler(this.subbtn_Click);
            // 
            // divbtn
            // 
            this.divbtn.Location = new System.Drawing.Point(209, 159);
            this.divbtn.Name = "divbtn";
            this.divbtn.Size = new System.Drawing.Size(25, 24);
            this.divbtn.TabIndex = 3;
            this.divbtn.Text = "/";
            this.divbtn.UseVisualStyleBackColor = true;
            this.divbtn.Click += new System.EventHandler(this.divbtn_Click);
            // 
            // mulbtn
            // 
            this.mulbtn.Location = new System.Drawing.Point(156, 159);
            this.mulbtn.Name = "mulbtn";
            this.mulbtn.Size = new System.Drawing.Size(25, 24);
            this.mulbtn.TabIndex = 2;
            this.mulbtn.Text = "*";
            this.mulbtn.UseVisualStyleBackColor = true;
            this.mulbtn.Click += new System.EventHandler(this.mulbtn_Click);
            // 
            // modbtn
            // 
            this.modbtn.Location = new System.Drawing.Point(261, 159);
            this.modbtn.Name = "modbtn";
            this.modbtn.Size = new System.Drawing.Size(25, 24);
            this.modbtn.TabIndex = 4;
            this.modbtn.Text = "%";
            this.modbtn.UseVisualStyleBackColor = true;
            this.modbtn.Click += new System.EventHandler(this.modbtn_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(59, 39);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(57, 12);
            this.label1.TabIndex = 5;
            this.label1.Text = "첫번째 값";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(59, 76);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(57, 12);
            this.label2.TabIndex = 6;
            this.label2.Text = "두번째 값";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(59, 115);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(45, 12);
            this.label3.TabIndex = 7;
            this.label3.Text = "결과 값";
            // 
            // value1
            // 
            this.value1.Location = new System.Drawing.Point(147, 36);
            this.value1.Name = "value1";
            this.value1.Size = new System.Drawing.Size(100, 21);
            this.value1.TabIndex = 8;
            // 
            // value2
            // 
            this.value2.Location = new System.Drawing.Point(147, 67);
            this.value2.Name = "value2";
            this.value2.Size = new System.Drawing.Size(100, 21);
            this.value2.TabIndex = 9;
            // 
            // value3
            // 
            this.value3.Location = new System.Drawing.Point(147, 106);
            this.value3.Name = "value3";
            this.value3.Size = new System.Drawing.Size(100, 21);
            this.value3.TabIndex = 10;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(309, 226);
            this.Controls.Add(this.value3);
            this.Controls.Add(this.value2);
            this.Controls.Add(this.value1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.modbtn);
            this.Controls.Add(this.divbtn);
            this.Controls.Add(this.mulbtn);
            this.Controls.Add(this.subbtn);
            this.Controls.Add(this.addbtn);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button addbtn;
        private System.Windows.Forms.Button subbtn;
        private System.Windows.Forms.Button divbtn;
        private System.Windows.Forms.Button mulbtn;
        private System.Windows.Forms.Button modbtn;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox value1;
        private System.Windows.Forms.TextBox value2;
        private System.Windows.Forms.TextBox value3;
    }
}

