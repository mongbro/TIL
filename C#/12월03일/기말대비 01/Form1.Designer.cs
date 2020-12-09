namespace 기말대비_01
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
            this.telnum = new System.Windows.Forms.Label();
            this.textBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // telnum
            // 
            this.telnum.AutoSize = true;
            this.telnum.Location = new System.Drawing.Point(31, 44);
            this.telnum.Name = "telnum";
            this.telnum.Size = new System.Drawing.Size(53, 12);
            this.telnum.TabIndex = 0;
            this.telnum.Text = "전화번호";
            // 
            // textBox
            // 
            this.textBox.Location = new System.Drawing.Point(90, 35);
            this.textBox.Name = "textBox";
            this.textBox.Size = new System.Drawing.Size(158, 21);
            this.textBox.TabIndex = 1;
            this.textBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBox_KeyPress);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(267, 83);
            this.Controls.Add(this.textBox);
            this.Controls.Add(this.telnum);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label telnum;
        private System.Windows.Forms.TextBox textBox;
    }
}

