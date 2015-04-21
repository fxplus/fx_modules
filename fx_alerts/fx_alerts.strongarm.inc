<?php
/**
 * @file
 * fx_alerts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fx_alerts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_alert_cron_delete';
  $strongarm->value = 1;
  $export['user_alert_cron_delete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_alert_label';
  $strongarm->value = '';
  $export['user_alert_label'] = $strongarm;

  return $export;
}
