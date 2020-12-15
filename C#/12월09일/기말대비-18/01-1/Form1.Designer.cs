namespace _01_1
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
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.forward = new System.Windows.Forms.Button();
            this.behind = new System.Windows.Forms.Button();
            this.invisible = new System.Windows.Forms.Button();
            this.visible = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 12);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(137, 61);
            this.button1.TabIndex = 0;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(66, 50);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(137, 61);
            this.button2.TabIndex = 1;
            this.button2.Text = "button2";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(118, 93);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(137, 61);
            this.button3.TabIndex = 2;
            this.button3.Text = "button3";
            this.button3.UseVisualStyleBackColor = true;
            // 
            // forward
            // 
            this.forward.Location = new System.Drawing.Point(12, 183);
            this.forward.Name = "forward";
            this.forward.Size = new System.Drawing.Size(112, 22);
            this.forward.TabIndex = 3;
            this.forward.Text = "맨앞으로";
            this.forward.UseVisualStyleBackColor = true;
            this.forward.Click += new System.EventHandler(this.forward_Click);
            // 
            // behind
            // 
            this.behind.Location = new System.Drawing.Point(143, 183);
            this.behind.Name = "behind";
            this.behind.Size = new System.Drawing.Size(112, 22);
            this.behind.TabIndex = 4;
            this.behind.Text = "맨뒤로";
            this.behind.UseVisualStyleBackColor = true;
            this.behind.Click += new System.EventHandler(this.behind_Click);
            // 
            // invisible
            // 
            this.invisible.Location = new System.Drawing.Point(143, 211);
            this.invisible.Name = "invisible";
            this.invisible.Size = new System.Drawing.Size(112, 22);
            this.invisible.TabIndex = 6;
            this.invisible.Text = "숨기기";
            this.invisible.UseVisualStyleBackColor = true;
            this.invisible.Click += new System.EventHandler(this.invisible_Click);
            // 
            // visible
            // 
            this.visible.Location = new System.Drawing.Point(12, 211);
            this.visible.Name = "visible";
            this.visible.Size = new System.Drawing.Size(112, 22);
            this.visible.TabIndex = 5;
            this.visible.Text = "보이기";
            this.visible.UseVisualStyleBackColor = true;
            this.visible.Click += new System.EventHandler(this.visible_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(276, 256);
            this.Controls.Add(this.invisible);
            this.Controls.Add(this.visible);
            this.Controls.Add(this.behind);
            this.Controls.Add(this.forward);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button forward;
        private System.Windows.Forms.Button behind;
        private System.Windows.Forms.Button invisible;
        private System.Windows.Forms.Button visible;
    }
}

