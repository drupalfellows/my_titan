<?php
/**
 * @file
 * mt_alarms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mt_alarms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_alarm';
  $strongarm->value = '1';
  $export['ant_alarm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_alarm';
  $strongarm->value = 'Alarm (user = [node:author], time = [node:field_time])';
  $export['ant_pattern_alarm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_alarm';
  $strongarm->value = 0;
  $export['ant_php_alarm'] = $strongarm;

  
  return $export;
}
