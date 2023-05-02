<form action="<?php echo $_SERVER['PHP_SELF'] ?>" method="POST">
    <header>
        <p>Give us your honest details to serve you better!</p>
    </header>
    <div>
        <label for="name">Name:</label>
        <input type="text" name="name" id="name" placeholder="full name" value="<?php echo $inputs['name'] ?? '' ?>">
        <small><?php echo $errors['name'] ?? '' ?></small>
    </div>
    <div>
        <label for="email">Email:</label>
        <input type="text" name="email" id="email" placeholder="Email Address" value="<?php echo $inputs['email'] ?? '' ?>">
        <small><?php echo $errors['email'] ?? '' ?></small>
    </div>
    <div>
        <label for="age">Age:</label>
        <input type="number" name="age" id="age" placeholder="Yopur correct Age" value="<?php echo $inputs['age'] ?? '' ?>">
        <small><?php echo $errors['age'] ?? '' ?></small>
    </div>
    <div>
        <label for="url">URL:</label>
        <input type="text" name="url" id="url" placeholder="Your website(optional)" value="<?php echo $inputs['url'] ?? '' ?>">
        <small><?php echo $errors['url'] ?? '' ?></small>
    </div>
    <div>
        <label for="email">Email:</label>
        <input type="text" name="ip" id="ip" placeholder="Your Defaault machine(optional)" value="<?php echo $inputs['ip'] ?? '' ?>">
        <small><?php echo $errors['ip'] ?? '' ?></small>
    </div>
    <button type="submit">Registration</button>
</form>
