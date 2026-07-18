<?php
$servername = "sql103.infinityfree.com";
$username = "if0_42389360";
$password = "Zbt4abSHzWqqm";
$dbname = "if0_42389360_myfirst";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if (isset($_POST['action']) && $_POST['action'] == 'toggle') {
    $id = intval($_POST['id']);
    $new_status = intval($_POST['status']);
    
    $update_sql = "UPDATE user SET Status = $new_status WHERE ID = $id";
    if ($conn->query($update_sql) === TRUE) {
        echo "success";
    } else {
        echo "error";
    }
    $conn->close();
    exit;
}

if (isset($_GET['action']) && $_GET['action'] == 'get_users') {
    $select_sql = "SELECT ID, Name, Age, Status FROM user";
    $result = $conn->query($select_sql);

    if ($result && $result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            $status = isset($row["Status"]) ? $row["Status"] : 0;
            echo "<tr>";
            echo "<td>" . $row["ID"] . "</td>";
            echo "<td>" . $row["Name"] . "</td>";
            echo "<td>" . $row["Age"] . "</td>";
            echo "<td id='status-" . $row["ID"] . "'>" . $status . "</td>";
            echo "<td><button onclick='toggleStatus(" . $row["ID"] . ")'>Toggle</button></td>";
            echo "</tr>";
        }
    } else {
        echo "<tr><td colspan='5'>No records found</td></tr>";
    }
    $conn->close();
    exit;
}

if (isset($_GET['action']) && $_GET['action'] == 'insert') {
    $name = $conn->real_escape_string($_GET['name']);
    $age = $conn->real_escape_string($_GET['age']);

    $sql = "INSERT INTO user (Name, Age, Status) VALUES ('$name', '$age', 0)";

    if ($conn->query($sql) === TRUE) {
        header("Location: f.html");
        exit;
    } else {
        echo "Error: " . $conn->error;
    }
}
$conn->close();
?>