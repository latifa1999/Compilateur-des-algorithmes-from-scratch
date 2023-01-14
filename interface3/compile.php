<?php

function comp()
{
    file_put_contents('algo.txt', $_POST['algo']);
    $output = shell_exec("execution<algo.txt");
    shell_exec('rm algo.txt');
    echo $output;
}

function execute()
{
    file_put_contents('algo.txt', $_POST['algo']);
    $output = shell_exec("execution<algo.txt");
    shell_exec('rm algo.txt');
    $output .= shell_exec('gcc -o final_prog test.c');
    $cont = file_get_contents("test.c");
    $pat = "/scanf\(/i";

    if(preg_match_all($pat, $cont)){
        $output2 = shell_exec("start final_prog");
        $result = array('errors' => $output, 'result' => $output2);
        echo json_encode($result, JSON_PRETTY_PRINT);       
    }
    else{
    $output2 = shell_exec("final_prog");
    $result = array('errors' => $output, 'result' => $output2);
    echo json_encode($result, JSON_PRETTY_PRINT);
}
}


if ($_POST['type'] === "exec")
    execute();
elseif ($_POST['type'] === "comp")
    comp();

?>