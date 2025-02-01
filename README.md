<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    
</head>
<body>

<h1>Bank Management System</h1>

<h2>Overview</h2>
<p>This is a console-based Bank Management System built in C++. The system allows users to create accounts, deposit and withdraw money, transfer funds, check balances, view transaction history, change passwords, and provides an admin panel for managing user accounts.</p>

<h2>Features</h2>
<ul>
    <li><strong>Account Creation:</strong> Allows new users to create a bank account by entering a name and a password.</li>
    <li><strong>Deposit:</strong> Users can deposit money into their accounts.</li>
    <li><strong>Withdraw:</strong> Users can withdraw money from their accounts, provided they have sufficient balance.</li>
    <li><strong>Transfer:</strong> Users can transfer funds to other users, provided they have sufficient balance.</li>
    <li><strong>Check Balance:</strong> Users can check their account balance at any time.</li>
    <li><strong>View Transaction History:</strong> Users can view all the transactions made on their accounts.</li>
    <li><strong>Change Password:</strong> Users can change their passwords after logging in.</li>
    <li><strong>Admin Panel:</strong> Admins can view all accounts and delete user accounts.</li>
</ul>

<h2>Functionality</h2>
<p><strong>Admin Functions:</strong> Admin users can view all accounts and delete them.</p>
<p><strong>User Functions:</strong> Normal users can create accounts, log in, and perform transactions such as depositing, withdrawing, transferring, and checking their balance.</p>

<h2>How to Use</h2>
<ol>
    <li><strong>Account Creation:</strong> When you first start the program, you can create a new account by choosing the "Create Account" option and providing a name and password.</li>
    <li><strong>Login:</strong> After account creation, you can log in with the name and password you provided.</li>
    <li><strong>Admin Mode:</strong> The admin can access the admin panel by logging in with the admin credentials.</li>
    <li><strong>Transaction Management:</strong>
        <ul>
            <li>Deposit money into your account.</li>
            <li>Withdraw money from your account (provided you have sufficient balance).</li>
            <li>Transfer money to other users (provided you have sufficient balance).</li>
            <li>View your account balance and transaction history.</li>
        </ul>
    </li>
</ol>

<h2>Admin Mode</h2>
<p><strong>Admin users can:</strong></p>
<ul>
    <li>View all user accounts and balances.</li>
    <li>Delete any user account.</li>
</ul>

<h2>Requirements</h2>
<ul>
    <li>A C++ compiler (such as GCC or Clang) is needed to compile and run the program.</li>
    <li>No additional libraries are required beyond the C++ Standard Library.</li>
</ul>

<h2>Compilation and Running Instructions</h2>

<h3>For Linux/macOS:</h3>
<ol>
    <li>Open a terminal window.</li>
    <li>Navigate to the directory containing the source code file (<code>Simple_Bank_System.cpp</code>).</li>
    <li>Compile the program with the following command:
        <pre>g++ -o Simple_Bank_System Simple_Bank_System.cpp</pre>
    </li>
    <li>Run the compiled program:
        <pre>./Simple_Bank_System</pre>
    </li>
</ol>

<h3>For Windows:</h3>
<ol>
    <li>Open Command Prompt or PowerShell.</li>
    <li>Navigate to the directory where the source code is saved.</li>
    <li>Compile the program with the following command:
        <pre>g++ -o Simple_Bank_System Simple_Bank_System.cpp</pre>
    </li>
    <li>Run the program:
        <pre>Simple_Bank_System.exe</pre>
    </li>
</ol>

<h2>Login Details</h2>
<ul>
    <li><strong>Admin Login:</strong>
        <ul>
            <li>Username: <code>admin</code></li>
            <li>Password: <code>adminpass</code></li>
        </ul>
    </li>
    <li><strong>User Login:</strong> Choose your own username and password when creating an account.</li>
</ul>

<h2>Notes</h2>
<ul>
    <li>This program stores account data only during the runtime. All data is lost when the program is closed.</li>
    <li>Passwords are not encrypted, so use simple passwords for testing purposes.</li>
</ul>

<h2>License</h2>
<p>This project is open-source and free to use for personal and educational purposes.</p>

</body>
</html>
