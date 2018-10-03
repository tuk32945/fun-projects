<?php

/**

*This module also creates multiple
*custom drush commands to be used
*in the TU Framework sites

*/

function tu_framework_mod_disable_drush_command(){
  $items['tu-dis'] = array(
    'description' => 'This command will queue UI and Admin modules to be disabled at the next cron run',
  );

  $items['tu-en'] = array(
    'description' => 'This command will queue UI and Admin modules to be enabled at the next cron run',
  );


  return $items;
}

function drush_tu_framework_mod_disable_tu_dis(){
  global $modules_readable_name;
  $modules_to_disable = $modules_readable_name;

  foreach ($modules_to_disable as $key => $value){
    $modules_to_disable[$key] = $key;
  }
  variable_set('tu_framework_mod_disable_toggle_each', $modules_to_disable);
  module_disable(array_keys($modules_to_disable), FALSE);

    //print_r($toggle_default[$value]);die;

  }

function drush_tu_framework_mod_disable_tu_en(){
  global $modules_readable_name;
  $modules_to_enable = $modules_readable_name;

    foreach ($modules_to_enable as $key => $value){
      $modules_to_enable[$key] = 0;
    }
    variable_set('tu_framework_mod_disable_toggle_each', $modules_to_enable);
    module_enable(array_keys($modules_readable_name), FALSE);
}
